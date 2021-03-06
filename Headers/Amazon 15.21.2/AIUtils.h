//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AIUtils : NSObject
{
}

+ (void)resetResourceBundle;
+ (id)getLocalizedString:(id)arg1 comment:(id)arg2;
+ (id)getUnarchivedValueForData:(id)arg1 ofClass:(Class)arg2 withOptionalKey:(id)arg3 error:(id *)arg4;
+ (id)getArchivedValueForObject:(id)arg1;
+ (_Bool)isConnected;
+ (_Bool)onSimulator;
+ (_Bool)usePreProd;
+ (_Bool)useProd;
+ (_Bool)isDebug;
+ (void)restrictedLogNotice:(id)arg1 params:(id)arg2;
+ (id)escapedString:(id)arg1;
+ (void)setCookieWithName:(id)arg1 value:(id)arg2 domain:(id)arg3;
+ (id)configureAuthPortalDomain:(id)arg1;
+ (id)getPandaEndpointPrefix;
+ (id)mapAssocHandleFromDomain:(id)arg1;
+ (id)getHexStringFromNSData:(id)arg1;
+ (id)stringFromHexString:(id)arg1;
+ (_Bool)pathAndHostMatchForURL:(id)arg1 otherURL:(id)arg2;
+ (id)generateURLFromURLString:(id)arg1 params:(id)arg2;
+ (id)urlWithOutParamsFromURL:(id)arg1;
+ (id)domainFromURL:(id)arg1;
+ (id)removeQuotesFromString:(id)arg1;
+ (id)getTrustToken;
+ (void)removeMAPAmznAppIdCookieWithDomain:(id)arg1;
+ (void)setMAPAmznAppIdCookieWithDomain:(id)arg1;
+ (void)removeCookie:(id)arg1;
+ (id)getCookie:(id)arg1;
+ (void)updateWebviewStorageWithCookies:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)errorWithCode:(unsigned long long)arg1 description:(id)arg2 userInfo:(id)arg3;
+ (id)errorWithCode:(unsigned long long)arg1 description:(id)arg2;
+ (id)initSpinnerViewWithFrame:(struct CGRect)arg1;
+ (id)URLDecodeString:(id)arg1;
+ (id)URLEncodeString:(id)arg1;
+ (id)queryDictionaryFromString:(id)arg1;
+ (id)queryDictionaryFromURL:(id)arg1;
+ (id)percentDecodedQueryParamsFromURL:(id)arg1;
+ (void)initialize;

@end

