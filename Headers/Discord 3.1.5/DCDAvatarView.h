//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDAnimatedImageView.h"

@class NSString;

@interface DCDAvatarView : SDAnimatedImageView
{
    NSString *_messageId;
}

@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (void)handleLongPressAvatar:(id)arg1;
- (void)handleTapAvatar:(id)arg1;
- (void)setTapAvatarListener:(id)arg1;
- (void)setWithAcronym:(id)arg1;
- (void)setURLString:(id)arg1 cornerRadius:(double)arg2;
- (void)setURLString:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;

@end

