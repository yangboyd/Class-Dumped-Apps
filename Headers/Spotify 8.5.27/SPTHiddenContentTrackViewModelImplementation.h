//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHiddenContentTrackViewModel-Protocol.h"

@class NSString, NSURL, UIColor;
@protocol SPTAudioPreviewModel, SPTContextMenuOptionsFactory, SPTContextMenuPresenterFactory, SPTExplicitContentAccessManager;

@interface SPTHiddenContentTrackViewModelImplementation : NSObject <SPTHiddenContentTrackViewModel>
{
    _Bool _explicit;
    _Bool _playable;
    _Bool _banned;
    NSURL *_albumImageURL;
    long long _feedbackIcon;
    UIColor *_feedbackIconColor;
    NSString *_previewId;
    NSString *_subtitle;
    NSString *_title;
    NSURL *_URL;
    id <SPTAudioPreviewModel> _audioPreviewModel;
    id <SPTContextMenuOptionsFactory> _contextMenuOptionsFactory;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    NSString *_albumName;
}

@property(readonly, nonatomic, getter=isBanned) _Bool banned; // @synthesize banned=_banned;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=_playable;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
@property(retain, nonatomic) id <SPTContextMenuOptionsFactory> contextMenuOptionsFactory; // @synthesize contextMenuOptionsFactory=_contextMenuOptionsFactory;
@property(retain, nonatomic) id <SPTAudioPreviewModel> audioPreviewModel; // @synthesize audioPreviewModel=_audioPreviewModel;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit; // @synthesize explicit=_explicit;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *previewId; // @synthesize previewId=_previewId;
@property(readonly, nonatomic) UIColor *feedbackIconColor; // @synthesize feedbackIconColor=_feedbackIconColor;
@property(readonly, nonatomic) long long feedbackIcon; // @synthesize feedbackIcon=_feedbackIcon;
@property(readonly, nonatomic) NSURL *albumImageURL; // @synthesize albumImageURL=_albumImageURL;
- (void).cxx_destruct;
- (void)stopPreviewTrack;
- (void)previewTrack;
- (void)presentContextMenuInViewController:(id)arg1 senderView:(id)arg2;
@property(readonly, nonatomic, getter=isPreviewEnabled) _Bool previewEnabled;
- (id)initWithTrackEntity:(id)arg1 contextMenuPresenterFactory:(id)arg2 contextMenuOptionsFactory:(id)arg3 audioPreviewModel:(id)arg4 explicitContentAccessManager:(id)arg5 theme:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

