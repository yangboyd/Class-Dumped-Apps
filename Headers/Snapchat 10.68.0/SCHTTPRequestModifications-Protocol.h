//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, SCHTTPRequest;

@protocol SCHTTPRequestModifications
@property(readonly, nonatomic) SCHTTPRequest *requestWithModifications;
- (void)useGzippedBody;
- (void)useJSONBody:(NSDictionary *)arg1;
- (void)useFSNAuthAndURLEncodedFormBody:(NSDictionary *)arg1;
- (void)useURLEncodedFormBody:(NSDictionary *)arg1;
- (void)useFSNAuthAndMultipartFormBody:(NSDictionary *)arg1;
- (void)useMultipartFormBody:(NSDictionary *)arg1;
- (void)useContentType:(NSString *)arg1;
- (void)useFSNAuthHeaders;
- (void)useClientAttestationHeaders;
- (void)useQueryParameters:(NSDictionary *)arg1;
- (void)useFSNHost;
@end

