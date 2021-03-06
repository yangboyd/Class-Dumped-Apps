//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>
#import <InstagramAppCoreFramework/NSSecureCoding-Protocol.h>

@class IGUserSession, NSDictionary, NSString, NSURL, NSURLRequest;
@protocol IGBrowserPresentationDelegate, IGInstantExperienceScriptMessageHandling;

@interface IGBrowserSession : NSObject <NSSecureCoding, NSCopying, IGListDiffable>
{
    NSDictionary *_extraLoggingInfo;
    NSString *_sessionID;
    NSURLRequest *_urlRequest;
    unsigned long long _urlSource;
    IGUserSession *_userSession;
    unsigned long long _options;
    id <IGBrowserPresentationDelegate> _presentationDelegate;
    id <IGInstantExperienceScriptMessageHandling> _scriptMessageHandler;
    NSURL *_redirectURL;
    NSString *_profileUserId;
    NSString *_presenterModule;
    NSDictionary *_sponsoredLoggingInfo;
}

+ (_Bool)supportsSecureCoding;
+ (id)createBrowserSessionFromBrowserPreservationModel:(id)arg1 userSession:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *sponsoredLoggingInfo; // @synthesize sponsoredLoggingInfo=_sponsoredLoggingInfo;
@property(readonly, copy, nonatomic) NSString *presenterModule; // @synthesize presenterModule=_presenterModule;
@property(readonly, copy, nonatomic) NSString *profileUserId; // @synthesize profileUserId=_profileUserId;
@property(readonly, copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, nonatomic) id <IGInstantExperienceScriptMessageHandling> scriptMessageHandler; // @synthesize scriptMessageHandler=_scriptMessageHandler;
@property(readonly, nonatomic) __weak id <IGBrowserPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) unsigned long long urlSource; // @synthesize urlSource=_urlSource;
@property(readonly, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)browserLoggingExtra;
- (id)initWithURLRequest:(id)arg1 urlSource:(unsigned long long)arg2 userSession:(id)arg3 options:(unsigned long long)arg4 presentationDelegate:(id)arg5 extraLoggingInfo:(id)arg6 sponsoredLogginInfo:(id)arg7 scriptMessageHandler:(id)arg8 redirectURL:(id)arg9 profileUserId:(id)arg10 presenterModule:(id)arg11;

@end

