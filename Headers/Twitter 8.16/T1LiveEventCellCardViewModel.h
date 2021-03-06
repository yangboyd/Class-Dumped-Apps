//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSAttributedString, NSString, TFNTwitterCardContext, TFNTwitterEntityImageInfo, TFNTwitterLiveEvent;

@interface T1LiveEventCellCardViewModel : NSObject <TFNTwitterCardContextModel>
{
    TFNTwitterCardContext *_cardContext;
    TFNTwitterLiveEvent *_event;
    NSAttributedString *_attributedTitleString;
    NSAttributedString *_attributedSubtitleString;
    NSAttributedString *_attributedLiveString;
}

@property(readonly, copy, nonatomic) NSAttributedString *attributedLiveString; // @synthesize attributedLiveString=_attributedLiveString;
@property(readonly, copy, nonatomic) NSAttributedString *attributedSubtitleString; // @synthesize attributedSubtitleString=_attributedSubtitleString;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTitleString; // @synthesize attributedTitleString=_attributedTitleString;
@property(readonly, nonatomic) TFNTwitterLiveEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterEntityImageInfo *eventThumbnailImageInfo;
@property(readonly, copy, nonatomic) NSString *accessibilityLabel;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

