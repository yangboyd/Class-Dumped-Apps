//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JBTSettingsClient, JBTSignatureTextFormatter, JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplComposeAsyncSignatureTextFetcher : NSObject
{
    id <JBTSettingsClient> settingsClient_;
    id <JavaxInjectProvider> deviceUserSignatureProvider_;
    id <JBTSignatureTextFormatter> signatureTextFormatter_;
}

- (void)dealloc;
- (id)getSignatureTextForResponseTypeWithNSString:(id)arg1 withComGoogleAppsBigtopSyncClientImplSettingsApiSignatureSettings_ResponseType:(id)arg2 withJBTSignatureTextFormatter_SignaturePrefixType:(id)arg3;
- (id)getSignatureTextWithJBTCContactRef:(id)arg1 withJBTSignatureTextFormatter_SignaturePrefixType:(id)arg2;

@end

