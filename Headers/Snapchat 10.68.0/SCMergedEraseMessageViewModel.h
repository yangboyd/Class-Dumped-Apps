//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMergedStatusMessageChatViewModel.h"

@class NSString;

@interface SCMergedEraseMessageViewModel : SCMergedStatusMessageChatViewModel
{
    NSString *_mergedMessageSenderDisplayName;
    NSString *_textForStatusMessageLabel;
}

- (void).cxx_destruct;
- (void)_updateTextForStatusMessageLabel;
- (id)textForStatusMessageLabel;
- (void)addMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;

@end

