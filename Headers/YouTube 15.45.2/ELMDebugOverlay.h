//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;
@protocol ELMController;

@interface ELMDebugOverlay : UIView
{
    CAShapeLayer *_marginLayer;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_paddingLayer;
    CAShapeLayer *_contentLayer;
    id <ELMController> _controller;
}

- (void).cxx_destruct;
- (void)updateLayout;
- (id)initWithController:(id)arg1;

@end

