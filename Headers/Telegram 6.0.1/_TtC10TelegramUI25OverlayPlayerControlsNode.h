//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@interface _TtC10TelegramUI25OverlayPlayerControlsNode : ASDisplayNode
{
    // Error parsing type: , name: accountManager
    // Error parsing type: , name: postbox
    // Error parsing type: , name: presentationData
    // Error parsing type: , name: backgroundNode
    // Error parsing type: , name: collapseNode
    // Error parsing type: , name: albumArtNode
    // Error parsing type: , name: largeAlbumArtNode
    // Error parsing type: , name: titleNode
    // Error parsing type: , name: descriptionNode
    // Error parsing type: , name: shareNode
    // Error parsing type: , name: scrubberNode
    // Error parsing type: , name: leftDurationLabel
    // Error parsing type: , name: rightDurationLabel
    // Error parsing type: , name: backwardButton
    // Error parsing type: , name: forwardButton
    // Error parsing type: , name: currentIsPaused
    // Error parsing type: , name: playPauseButton
    // Error parsing type: , name: currentOrder
    // Error parsing type: , name: orderButton
    // Error parsing type: , name: currentLooping
    // Error parsing type: , name: loopingButton
    // Error parsing type: , name: currentRate
    // Error parsing type: , name: rateButton
    // Error parsing type: , name: separatorNode
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: updateIsExpanded
    // Error parsing type: , name: requestCollapse
    // Error parsing type: , name: requestShare
    // Error parsing type: , name: updateOrder
    // Error parsing type: , name: control
    // Error parsing type: , name: currentItemId
    // Error parsing type: , name: displayData
    // Error parsing type: , name: currentAlbumArtInitialized
    // Error parsing type: , name: currentAlbumArt
    // Error parsing type: , name: currentFileReference
    // Error parsing type: , name: statusDisposable
    // Error parsing type: , name: scrubbingDisposable
    // Error parsing type: , name: leftDurationLabelPushed
    // Error parsing type: , name: rightDurationLabelPushed
    // Error parsing type: , name: currentDuration
    // Error parsing type: , name: validLayout
}

- (void).cxx_destruct;
- (id)initWithLayerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)albumArtTap:(id)arg1;
- (void)rateButtonPressed;
- (void)playPausePressed;
- (void)forwardPressed;
- (void)backwardPressed;
- (void)loopingPressed;
- (void)orderPressed;
- (void)sharePressed;
- (void)collapsePressed;
- (void)didLoad;
- (void)dealloc;

@end

