//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CMLLayoutManager : NSObject
{
    NSArray *components_;
    double width_;
    double height_;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *components; // @synthesize components=components_;
@property(nonatomic) double height; // @synthesize height=height_;
@property(nonatomic) double width; // @synthesize width=width_;
- (id)description;
- (void)applyLayoutToViews:(id)arg1 animated:(_Bool)arg2;
- (void)updatePadding:(struct UIEdgeInsets)arg1;
- (void)updateLayout;
@property(nonatomic) struct CGSize size;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithChildComponents:(id)arg1;

@end

