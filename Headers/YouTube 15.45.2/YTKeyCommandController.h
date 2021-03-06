//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol YTKeyCommandControllerDelegate;

@interface YTKeyCommandController : NSObject
{
    _Bool _isTextFieldActive;
    id <YTKeyCommandControllerDelegate> _keyCommandControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTKeyCommandControllerDelegate> keyCommandControllerDelegate; // @synthesize keyCommandControllerDelegate=_keyCommandControllerDelegate;
- (id)seekToNextChapterKeyCommandWithAction:(SEL)arg1;
- (id)seekToPreviousChapterKeyCommandWithAction:(SEL)arg1;
- (id)toggleClosedCaptionsKeyCommandWithAction:(SEL)arg1;
- (id)seekForwardKeyCommandWithAction:(SEL)arg1;
- (id)seekBackwardKeyCommandWithAction:(SEL)arg1;
- (id)playPauseKeyCommandWithAction:(SEL)arg1;
- (void)performKeyCommand:(id)arg1;
- (id)keyCommandsWithAction:(SEL)arg1;
- (_Bool)enableKeyCommand;
- (void)textViewTextDidEndEditing:(id)arg1;
- (void)textViewTextDidBeginEditing:(id)arg1;
- (void)textFieldTextDidEndEditing:(id)arg1;
- (void)textFieldTextDidBeginEditing:(id)arg1;
- (id)init;

@end

