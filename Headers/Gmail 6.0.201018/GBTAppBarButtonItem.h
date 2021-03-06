//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class MDCButtonBarButton;
@protocol GBTAppBarButtonItemActionDelegate, GBTAppBarButtonItemStyleProviding;

@interface GBTAppBarButtonItem : UIBarButtonItem
{
    _Bool _selected;
    unsigned long long _type;
    id <GBTAppBarButtonItemStyleProviding> _styleProvider;
    MDCButtonBarButton *_realCustomView;
    id <GBTAppBarButtonItemActionDelegate> _actionDelegate;
}

+ (void)applyTextButtonStyle:(id)arg1 useBoldFont:(_Bool)arg2;
+ (id)textButtonWithType:(unsigned long long)arg1 actionDelegate:(id)arg2;
+ (id)buttonItemWithImage:(id)arg1 actionDelegate:(id)arg2 canLongPress:(_Bool)arg3 isRotatable:(_Bool)arg4;
+ (id)imageButtonWithType:(unsigned long long)arg1 actionDelegate:(id)arg2;
+ (id)buttonWithCustomTitle:(id)arg1 actionDelegate:(id)arg2;
+ (id)buttonWithCustomView:(id)arg1;
+ (id)buttonWithType:(unsigned long long)arg1 actionDelegate:(id)arg2;
+ (_Bool)isRotatable:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTAppBarButtonItemActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak MDCButtonBarButton *realCustomView; // @synthesize realCustomView=_realCustomView;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <GBTAppBarButtonItemStyleProviding> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)didRecognizeGestureOnCustomButtonWithRecognizer:(id)arg1;
- (void)updateContentEdgeInsetsForCustomButton;
- (void)updateStyleForCustomButton;
- (void)updateStyleForTextButton;
- (void)updateTintColor;
- (void)setEnabled:(_Bool)arg1;
- (void)rotateFrom:(id)arg1;
- (void)rotateOutFading:(_Bool)arg1;
- (void)rotateInAnimated:(_Bool)arg1;

@end

