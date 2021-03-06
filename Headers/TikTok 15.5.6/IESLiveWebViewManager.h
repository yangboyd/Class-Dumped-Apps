//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WKWebView;
@protocol HTSKVStore, IESLiveAppInfo, IESLiveEnvironment, IESLiveLanguageService, IESLiveSettings, IESLiveWebViewService;

@interface IESLiveWebViewManager : NSObject
{
    _Bool _hasInjectedBaseInnerDomains;
    NSArray *_innerDomains;
    NSString *_systemUserAgent;
    WKWebView *_uaWebView;
    id <IESLiveAppInfo> _appInfo;
    id <IESLiveEnvironment> _environment;
    id <IESLiveLanguageService> _languageService;
    id <IESLiveSettings> _settings;
    id <IESLiveWebViewService> _webViewService;
    id <HTSKVStore> _kvStore;
}

+ (id)shared;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) id <IESLiveWebViewService> webViewService; // @synthesize webViewService=_webViewService;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveLanguageService> languageService; // @synthesize languageService=_languageService;
@property(retain, nonatomic) id <IESLiveEnvironment> environment; // @synthesize environment=_environment;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) WKWebView *uaWebView; // @synthesize uaWebView=_uaWebView;
@property(copy, nonatomic) NSString *systemUserAgent; // @synthesize systemUserAgent=_systemUserAgent;
@property(nonatomic) _Bool hasInjectedBaseInnerDomains; // @synthesize hasInjectedBaseInnerDomains=_hasInjectedBaseInnerDomains;
@property(copy, nonatomic) NSArray *innerDomains; // @synthesize innerDomains=_innerDomains;
- (void).cxx_destruct;
- (void)addInnerDomainsFromSettings;
- (void)configInnerDomainsIfNeed;
- (id)whiteList;
- (_Bool)inWhiteListWith:(id)arg1;
- (id)uaRemoveBlankIfNeed:(id)arg1;
- (id)customUserAgent;
- (id)hostUserAgent;
- (id)didReceiveSystemUA:(id)arg1;
- (id)fetchSystemUserAgent;
- (void)registerUserAgentWithWKWebView:(id)arg1;
- (void)buildInnerDomains;
- (id)init;

@end

