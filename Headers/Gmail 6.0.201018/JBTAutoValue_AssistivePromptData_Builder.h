//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTAssistivePromptData_Builder.h"

@class ComGoogleCommonCollectImmutableList, JBTAssistivePromptData_PromptType, JavaLangLong, NSString;

@interface JBTAutoValue_AssistivePromptData_Builder : JBTAssistivePromptData_Builder
{
    NSString *title_;
    JBTAssistivePromptData_PromptType *type_;
    ComGoogleCommonCollectImmutableList *recipientAvailability_;
    JavaLangLong *scheduledSendTimeMs_;
}

- (void)dealloc;
- (id)build;
- (id)setScheduledSendTimeMsWithLong:(long long)arg1;
- (id)setRecipientAvailabilityWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)setTypeWithJBTAssistivePromptData_PromptType:(id)arg1;
- (id)setTitleWithNSString:(id)arg1;

@end

