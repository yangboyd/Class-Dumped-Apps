//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBaseChatCellViewModel.h"

#import "SCPendingChatCellViewConfig-Protocol.h"

@class NSString;
@protocol NSObject;

@interface SCPendingStateCellViewModel : SCBaseChatCellViewModel <SCPendingChatCellViewConfig>
{
    NSString *_recipient;
    long long _pendingSnapNum;
    long long _pendingChatNum;
}

+ (id)pendingLabelColor;
+ (id)pendingLabelFont;
@property(readonly, nonatomic) long long pendingChatNum; // @synthesize pendingChatNum=_pendingChatNum;
@property(readonly, nonatomic) long long pendingSnapNum; // @synthesize pendingSnapNum=_pendingSnapNum;
@property(readonly, copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (id)textforPendingNotificationLabel;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isReleaseByCurrentUser;
@property(readonly, nonatomic) _Bool shouldDisplayBelowFoldInChat;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) id <NSObject> identifier;
@property(readonly, nonatomic) NSString *reusableCellIdentifier;
- (double)calculateHeight;
- (id)initWithProps:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool bottomLeftCornerIsRounded;
@property(nonatomic) _Bool bottomRightCornerIsRounded;
@property(readonly, nonatomic) double dateHeaderHeight;
@property(readonly, nonatomic) double dateHeaderHorizontalMargin;
@property(readonly, nonatomic) double dateHeaderVerticalMargin;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double headerHorizontalMargin;
@property(nonatomic) int headerIndex;
@property(nonatomic) double height;
@property(nonatomic) _Bool isFirstViewModel;
@property(nonatomic) _Bool isLastViewModel;
@property(readonly, nonatomic) _Bool isUnseenMessageInChat;
@property(readonly, nonatomic) _Bool shouldShowDateHeader;
@property(readonly, nonatomic) _Bool shouldShowSenderHeader;
@property(readonly, nonatomic) _Bool shouldShowTimestamp;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double topMargin;
@property(nonatomic) _Bool topRightCornerIsRounded;

@end

