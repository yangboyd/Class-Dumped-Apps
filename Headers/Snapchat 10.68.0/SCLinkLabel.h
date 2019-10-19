//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSDictionary, NSMutableDictionary;
@protocol SCLinkLabelDelegate;

@interface SCLinkLabel : UILabel
{
    NSMutableDictionary *_linksDictionary;
    struct UIEdgeInsets _hitTestEdgeInsets;
    id <SCLinkLabelDelegate> _delegate;
    NSDictionary *_normalAttributes;
    NSDictionary *_boldAttributes;
    NSDictionary *_italicAttributes;
    NSDictionary *_linkAttributes;
}

@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(retain, nonatomic) NSDictionary *italicAttributes; // @synthesize italicAttributes=_italicAttributes;
@property(retain, nonatomic) NSDictionary *boldAttributes; // @synthesize boldAttributes=_boldAttributes;
@property(retain, nonatomic) NSDictionary *normalAttributes; // @synthesize normalAttributes=_normalAttributes;
@property(nonatomic) id <SCLinkLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_handleTouchAtPoint:(struct CGPoint)arg1;
- (void)_applyNormalAttributes:(id)arg1;
- (void)linkfyMarkdownString:(id)arg1;
- (void)linkfyHtmlString:(id)arg1;

@end

