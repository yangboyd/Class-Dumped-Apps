//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsAssistantClientApiInlineassistInlineAssistanceOpportunityData.h"

@class ComGoogleCommonBaseOptional;

@interface ComGoogleAppsAssistantClientApiInlineassist_AutoValue_InlineAssistanceOpportunityData : ComGoogleAppsAssistantClientApiInlineassistInlineAssistanceOpportunityData
{
    ComGoogleCommonBaseOptional *opportunityType_;
    ComGoogleCommonBaseOptional *metadata_;
    ComGoogleCommonBaseOptional *feedbackData_;
    ComGoogleCommonBaseOptional *spellingOpportunityData_;
    ComGoogleCommonBaseOptional *grammarOpportunityData_;
    ComGoogleCommonBaseOptional *dataProtectionOpportunityData_;
    ComGoogleCommonBaseOptional *autocorrectOpportunityData_;
    ComGoogleCommonBaseOptional *loggingMetadata_;
}

- (void)dealloc;
- (id)loggingMetadata;
- (id)autocorrectOpportunityData;
- (id)dataProtectionOpportunityData;
- (id)grammarOpportunityData;
- (id)spellingOpportunityData;
- (id)feedbackData;
- (id)metadata;
- (id)opportunityType;

@end

