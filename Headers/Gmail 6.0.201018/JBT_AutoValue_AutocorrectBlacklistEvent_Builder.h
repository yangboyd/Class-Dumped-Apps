//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTAutocorrectBlacklistEvent_Builder.h"

@class ComGoogleAppsAssistantClientApiInlineassistAutocorrectAutocorrectInlineAssistanceOpportunityData, JBTAutocorrectBlacklistEvent_Reason;

@interface JBT_AutoValue_AutocorrectBlacklistEvent_Builder : JBTAutocorrectBlacklistEvent_Builder
{
    ComGoogleAppsAssistantClientApiInlineassistAutocorrectAutocorrectInlineAssistanceOpportunityData *data_;
    JBTAutocorrectBlacklistEvent_Reason *reason_;
}

- (void)dealloc;
- (id)build;
- (id)setReasonWithJBTAutocorrectBlacklistEvent_Reason:(id)arg1;
- (id)setDataWithComGoogleAppsAssistantClientApiInlineassistAutocorrectAutocorrectInlineAssistanceOpportunityData:(id)arg1;

@end

