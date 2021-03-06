//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGCoreGraphicsNode.h>

@class NSAttributedString, NSLayoutManager, NSNumber, NSShadow;

@interface IGCoreGraphicsTextViewNode : IGCoreGraphicsNode
{
    long long _alignmentMode;
    NSShadow *_shadow;
    NSAttributedString *_attributedString;
    NSLayoutManager *_layoutManager;
    NSNumber *_lineFragmentPadding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *lineFragmentPadding; // @synthesize lineFragmentPadding=_lineFragmentPadding;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(copy, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) long long alignmentMode; // @synthesize alignmentMode=_alignmentMode;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

