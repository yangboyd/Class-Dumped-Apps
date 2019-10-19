//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDPreviewableWidget.h"

#import "IDFocusable-Protocol.h"

@class IDModel, IDProperty, NSString;

@interface IDLabel : IDPreviewableWidget <IDFocusable>
{
    IDProperty *_waitingAnimationProperty;
    IDProperty *_positionXProperty;
    IDProperty *_positionYProperty;
    IDModel *_textModel;
    struct CGPoint _position;
}

@property(readonly, nonatomic) IDModel *textModel; // @synthesize textModel=_textModel;
@property(retain, nonatomic) IDProperty *positionYProperty; // @synthesize positionYProperty=_positionYProperty;
@property(retain, nonatomic) IDProperty *positionXProperty; // @synthesize positionXProperty=_positionXProperty;
@property(retain, nonatomic) IDProperty *waitingAnimationProperty; // @synthesize waitingAnimationProperty=_waitingAnimationProperty;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
@property(nonatomic) _Bool waitingAnimation;
@property(nonatomic) long long textId;
@property(copy, nonatomic) NSString *text;
- (id)initWithWidgetId:(long long)arg1 previewModel:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 model:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2;
- (id)initWithWidgetId:(long long)arg1 textModel:(id)arg2 previewModel:(id)arg3;

@end

