//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;

@interface DOKDockableFullscreenConstraints : NSObject
{
    _Bool _isActive;
    UIView *_view;
    UIView *_containerView;
    NSArray *_constraints;
}

@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (void)deactivate;
- (void)activate;
- (id)initWithView:(id)arg1 containerView:(id)arg2;

@end

