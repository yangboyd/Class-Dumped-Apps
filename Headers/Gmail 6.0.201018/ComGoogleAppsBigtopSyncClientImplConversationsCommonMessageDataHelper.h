//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory;
@protocol ComGoogleAppsBigtopDataDelegationDelegationUrlRewriter;

@interface ComGoogleAppsBigtopSyncClientImplConversationsCommonMessageDataHelper : NSObject
{
    id <ComGoogleAppsBigtopDataDelegationDelegationUrlRewriter> delegationUrlRewriter_;
    ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter *multiLoginUrlRewriter_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    _Bool allowSignatureToElidedTextConversion_;
}

- (void)dealloc;
- (id)getBodyHtmlRegionsWithComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageData:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2 withComGoogleCommonBaseOptional:(id)arg3 withComGoogleAppsBigtopSyncClientImplConversationsCommonMessageDataHelper_WalletAttachmentRegionProcessingMode:(id)arg4;
- (id)getBodyHtmlRegionsWithComGoogleAppsBigtopServicesGmailCommonComponentDetailedMessageData:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2 withComGoogleCommonBaseOptional:(id)arg3;

@end

