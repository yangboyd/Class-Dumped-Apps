//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JBTIActionsHelper : NSObject
{
}

+ (void)initialize;
- (id)getGenericIconTypeWithJCSGoTo_Type:(id)arg1;
- (id)getFallbackGoToFromIntentWithComGoogleCaribouSmartmailIntentAction:(id)arg1 withJBTISmartMailComponentContextImpl:(id)arg2 withJCSAssignedId:(id)arg3;
- (_Bool)shouldShowIntentActionWithComGoogleCaribouSmartmailAction:(id)arg1 withComGoogleCommonTimeClock:(id)arg2;
- (_Bool)shouldShowEmailActionWithComGoogleCaribouSmartmailAction:(id)arg1 withComGoogleCommonTimeClock:(id)arg2;
- (_Bool)shouldShowCallActionWithComGoogleCaribouSmartmailAction:(id)arg1 withComGoogleCommonTimeClock:(id)arg2;
- (_Bool)shouldShowButtonActionWithComGoogleCaribouSmartmailAction:(id)arg1 withComGoogleCommonTimeClock:(id)arg2;
- (_Bool)shouldShowGoToActionWithComGoogleCaribouSmartmailAction:(id)arg1 withComGoogleCommonTimeClock:(id)arg2;
- (void)recordClickWithComGoogleAppsBigtopServicesSmartmailSmartMailMetricsProto_SmartMailActionType:(id)arg1 withJBTISmartMailComponentContextImpl:(id)arg2 withJCSAssignedId:(id)arg3;
- (void)recordAttachmentClickWithJBTMessageAttachment_FileType:(id)arg1 withJBTISmartMailMetricsRecorder:(id)arg2 withJBTItem:(id)arg3 withComGoogleAppsBigtopServicesSmartmailSmartMailMetricsProto_SmartMailClick_ClickContext:(id)arg4;
- (id)findActionWithJavaUtilList:(id)arg1 withJCSAssignedId:(id)arg2;
- (id)getActionFromProtoWithComGoogleCaribouSmartmailAction:(id)arg1 withComGoogleCommonTimeClock:(id)arg2 withJBTISmartMailCommandApplier:(id)arg3 withJBTISmartMailComponentContextImpl:(id)arg4 withJBTIFormattedTextParser:(id)arg5 withJBTISmartMailTranslationHelper:(id)arg6;
- (_Bool)addSupportedActionsWithJavaUtilList:(id)arg1 withJBTIActionsFilterImpl:(id)arg2 withComGoogleCommonTimeClock:(id)arg3 withJBTISmartMailCommandApplier:(id)arg4 withJBTISmartMailComponentContextImpl:(id)arg5 withComGoogleCommonCollectImmutableList_Builder:(id)arg6 withJBTIFormattedTextParser:(id)arg7 withJBTISmartMailTranslationHelper:(id)arg8;
- (id)applyActionWithComGoogleCommonTimeClock:(id)arg1 withJBTISmartMailCommandApplier:(id)arg2 withComGoogleCaribouSmartmailAction:(id)arg3 withJCSAssignedId:(id)arg4 withJBTSpan:(id)arg5 withComGoogleAppsBigtopServicesSmartmailSmartMailMetricsProto_SmartMailActionType:(id)arg6 withJBTISmartMailComponentContextImpl:(id)arg7;

@end

