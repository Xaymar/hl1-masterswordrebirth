#ifndef HTTP_REQUEST_HANDLER_H
#define HTTP_REQUEST_HANDLER_H

#include "rapidjson/fwd.h" // Rapid JSON Helpers from Infestus!

typedef rapidjson::Document JSONDocument;
typedef rapidjson::Value JSONValue;
typedef rapidjson::SizeType JSONSizeType;

#define REQUEST_URL_SIZE 128
#define REQUEST_BUFFER_SIZE 8192

namespace HTTPRequestHandler
{
	bool GetRequest(const char* url);
	bool PostRequest(const char* url, const char* body);
	bool PutRequest(const char* url, const char* body);
	bool DeleteRequest(const char* url);
	const char* GetRequestResponse(void);

	JSONDocument* ParseJSON(const char* data);
	JSONDocument* GetRequestAsJson(const char* url);
	JSONDocument* PostRequestAsJson(const char* url, const char* body);
	JSONDocument* PutRequestAsJson(const char* url, const char* body);
	JSONDocument* DeleteRequestAsJson(const char* url);

	// Print entire document as a JSON string...
	void PrintJSONDocument(const JSONDocument* pDocument);
}

#endif // HTTP_REQUEST_HANDLER_H