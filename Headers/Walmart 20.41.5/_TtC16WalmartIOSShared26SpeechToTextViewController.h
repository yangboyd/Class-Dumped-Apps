//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIVisualEffectView, _TtC10CoreStyles18CoreTertiaryButton, _TtC10CoreStyles9CoreLabel, _TtC16WalmartIOSShared14SpeechWaveView;

@interface _TtC16WalmartIOSShared26SpeechToTextViewController : UIViewController
{
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: speechWaveView
    // Error parsing type: , name: backgroundVisualEffectView
    // Error parsing type: , name: outputLabel
    // Error parsing type: , name: delegate
    // Error parsing type: , name: audioSessionCategory
    // Error parsing type: , name: speechRecognizer
    // Error parsing type: , name: recognitionRequest
    // Error parsing type: , name: recognitionTask
    // Error parsing type: , name: audioEngine
    // Error parsing type: , name: recorder
    // Error parsing type: , name: displayLink
    // Error parsing type: , name: speechRecognitionTimeout
    // Error parsing type: , name: speechTimeoutInterval
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateMeters;
- (void)cancel:(id)arg1;
- (void)timedOut;
- (void)microphoneTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
@property(nonatomic) __weak _TtC10CoreStyles9CoreLabel *outputLabel; // @synthesize outputLabel;
@property(nonatomic) __weak UIVisualEffectView *backgroundVisualEffectView; // @synthesize backgroundVisualEffectView;
@property(nonatomic) __weak _TtC16WalmartIOSShared14SpeechWaveView *speechWaveView; // @synthesize speechWaveView;
@property(nonatomic) __weak _TtC10CoreStyles18CoreTertiaryButton *cancelButton; // @synthesize cancelButton;

@end

