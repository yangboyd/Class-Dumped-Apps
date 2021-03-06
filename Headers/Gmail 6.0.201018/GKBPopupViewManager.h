//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIView;

@interface GKBPopupViewManager : NSObject
{
    NSMutableArray *_hidingPopupViews;
    UIView *_inputView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *inputView; // @synthesize inputView=_inputView;
- (id)nibWithName:(id)arg1 fromBundle:(id)arg2;
- (void)dismissPopupView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isPopupViewShown:(id)arg1;
- (struct CGRect)frameForView:(id)arg1 anchorView:(id)arg2 position:(unsigned long long)arg3 offset:(struct CGVector)arg4;
- (void)showPopupView:(id)arg1 anchorView:(id)arg2 position:(unsigned long long)arg3 offset:(struct CGVector)arg4;
- (id)loadPopupView:(id)arg1 fromBundle:(id)arg2;
- (id)init;

@end

