//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTDataProtectionPolicyViolation.h"

@class ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList;

@interface JBT_AutoValue_DataProtectionPolicyViolation : JBTDataProtectionPolicyViolation
{
    ComGoogleCommonBaseOptional *warningMessage_;
    ComGoogleCommonCollectImmutableList *opportunities_;
    ComGoogleCommonCollectImmutableList *unauthorizedRecipients_;
    ComGoogleCommonBaseOptional *subjectViolationMessage_;
    ComGoogleCommonCollectImmutableList *attachmentPolicyViolations_;
}

- (void)dealloc;
- (id)attachmentPolicyViolations;
- (id)subjectViolationMessage;
- (id)unauthorizedRecipients;
- (id)opportunities;
- (id)warningMessage;

@end

