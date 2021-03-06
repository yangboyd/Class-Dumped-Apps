//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDKLockupHeaderProtocol-Protocol.h"

@class GMDCProductLockupView, NSLayoutConstraint, NSLayoutXAxisAnchor, NSString;

@interface GDKLockupHeaderViewBase : UIView <GDKLockupHeaderProtocol>
{
    NSString *_productName;
    NSLayoutXAxisAnchor *_centerXAnchor;
    GMDCProductLockupView *_lockupView;
    UIView *_content;
    NSLayoutConstraint *_centerXConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *centerXConstraint; // @synthesize centerXConstraint=_centerXConstraint;
@property(retain, nonatomic) UIView *content; // @synthesize content=_content;
@property(retain, nonatomic) GMDCProductLockupView *lockupView; // @synthesize lockupView=_lockupView;
@property(retain, nonatomic) NSLayoutXAxisAnchor *centerXAnchor; // @synthesize centerXAnchor=_centerXAnchor;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

