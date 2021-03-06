//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GILClientVisualElement, NSArray, NSMutableArray, NSString;
@protocol DYNActionSheetLifecycleDelegate;

@interface DYNActionSheet : NSObject
{
    NSMutableArray *_actions;
    _Bool _withCancelButton;
    id <DYNActionSheetLifecycleDelegate> _lifecycleDelegate;
    NSString *_title;
    NSString *_accessibilityIdentifier;
    GILClientVisualElement *_visualElement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GILClientVisualElement *visualElement; // @synthesize visualElement=_visualElement;
@property(nonatomic) _Bool withCancelButton; // @synthesize withCancelButton=_withCancelButton;
@property(retain, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <DYNActionSheetLifecycleDelegate> lifecycleDelegate; // @synthesize lifecycleDelegate=_lifecycleDelegate;
@property(readonly, nonatomic) NSArray *actions;
- (void)addAction:(id)arg1;
- (id)init;

@end

