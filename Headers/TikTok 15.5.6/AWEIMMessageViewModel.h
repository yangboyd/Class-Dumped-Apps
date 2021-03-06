//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AWEIMMessage, NSArray, NSAttributedString;

@interface AWEIMMessageViewModel : NSObject <NSCopying>
{
    _Bool _shouldShowAlreadyReadLabel;
    _Bool _shouldShowAlreadyReadArrow;
    _Bool _isFolding;
    AWEIMMessage *_message;
    long long _readStatus;
    NSAttributedString *_alreadyReadLabelTextInFoldStatus;
    NSAttributedString *_alreadyReadLabelTextInUnfoldStatus;
    NSArray *_displayNames;
}

+ (id)viewModelWithMessage:(id)arg1;
@property(retain, nonatomic) NSArray *displayNames; // @synthesize displayNames=_displayNames;
@property(copy, nonatomic) NSAttributedString *alreadyReadLabelTextInUnfoldStatus; // @synthesize alreadyReadLabelTextInUnfoldStatus=_alreadyReadLabelTextInUnfoldStatus;
@property(copy, nonatomic) NSAttributedString *alreadyReadLabelTextInFoldStatus; // @synthesize alreadyReadLabelTextInFoldStatus=_alreadyReadLabelTextInFoldStatus;
@property(nonatomic) long long readStatus; // @synthesize readStatus=_readStatus;
@property(nonatomic) _Bool isFolding; // @synthesize isFolding=_isFolding;
@property(nonatomic) _Bool shouldShowAlreadyReadArrow; // @synthesize shouldShowAlreadyReadArrow=_shouldShowAlreadyReadArrow;
@property(nonatomic) _Bool shouldShowAlreadyReadLabel; // @synthesize shouldShowAlreadyReadLabel=_shouldShowAlreadyReadLabel;
@property(retain, nonatomic) AWEIMMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)setReadStatus:(long long)arg1 needTrackReadStatus:(_Bool)arg2;
- (id)unfoldArrowImage;
- (id)foldArrowImage;
- (id)attributedStringFold:(_Bool)arg1;
- (_Bool)isSeenByMyself;
@property(readonly, nonatomic) struct CGSize alreadyReadLabelSize;
- (id)alreadyReadLabelText;
- (id)p_getReadLabelFontDict;
- (void)trackReadStatusWithOldStatus:(long long)arg1 newStatus:(long long)arg2;
- (void)clearReadData:(_Bool)arg1;
- (_Bool)updateWithFinishedParticipantIDs:(id)arg1 expectedParticipantIDs:(id)arg2 AWEIMConversationParticipantDataController:(id)arg3 needTrackReadStatus:(_Bool)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end

