//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WZSDKMessage.h"

@interface WZAudioTrackOptions : WZSDKMessage
{
    _Bool _canFastForward;
    _Bool _canRewind;
    _Bool _canPerformPrimaryAction;
    _Bool _isPrimaryActionHighlighted;
    _Bool _canPerformSecondaryAction;
    _Bool _isSecondaryActionHighlighted;
}

@property(nonatomic) _Bool isSecondaryActionHighlighted; // @synthesize isSecondaryActionHighlighted=_isSecondaryActionHighlighted;
@property(nonatomic) _Bool canPerformSecondaryAction; // @synthesize canPerformSecondaryAction=_canPerformSecondaryAction;
@property(nonatomic) _Bool isPrimaryActionHighlighted; // @synthesize isPrimaryActionHighlighted=_isPrimaryActionHighlighted;
@property(nonatomic) _Bool canPerformPrimaryAction; // @synthesize canPerformPrimaryAction=_canPerformPrimaryAction;
@property(nonatomic) _Bool canRewind; // @synthesize canRewind=_canRewind;
@property(nonatomic) _Bool canFastForward; // @synthesize canFastForward=_canFastForward;

@end

