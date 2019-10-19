//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@class CAShapeLayer;

@interface BubbleBackgroundNode : ASDisplayNode
{
    _Bool _bordered;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_maskLayer;
    ASDisplayNode *_borderNode;
    ASDisplayNode *_maskNode;
}

@property(nonatomic) _Bool bordered; // @synthesize bordered=_bordered;
@property(retain, nonatomic) ASDisplayNode *maskNode; // @synthesize maskNode=_maskNode;
@property(retain, nonatomic) ASDisplayNode *borderNode; // @synthesize borderNode=_borderNode;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
- (void).cxx_destruct;
- (void)configureWithMessage:(id)arg1;
- (void)layout;
- (void)didLoad;
- (id)init;

@end

