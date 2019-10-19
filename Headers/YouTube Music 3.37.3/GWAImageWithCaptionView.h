//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAStackView.h"

#import "GWADependencyGraphComponent-Protocol.h"
#import "GWAMegalogsSupporting-Protocol.h"

@class GIPNetworkImageView, GWADependencyGraph, GWAMegalogsContext, NSArray, NSMutableArray, NSNumber, NSString, OrchImageWithCaption;
@protocol GWAImageWithCaptionViewDelgate;

@interface GWAImageWithCaptionView : OAStackView <GWADependencyGraphComponent, GWAMegalogsSupporting>
{
    GIPNetworkImageView *_imageView;
    NSMutableArray *_clickTriggers;
    GWADependencyGraph *_dependencyGraph;
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
    OrchImageWithCaption *_proto;
    id <GWAImageWithCaptionViewDelgate> _delegate;
    long long _contentMode;
}

@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) __weak id <GWAImageWithCaptionViewDelgate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OrchImageWithCaption *proto; // @synthesize proto=_proto;
@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
- (void).cxx_destruct;
- (void)prepareMegalogsContexts;
- (id)imageView;
- (void)setTintColor:(id)arg1;
- (void)setImageViewLayoutMargins:(long long)arg1;
- (struct CGSize)imageSize;
- (void)imageTapped;
- (void)setImageViewContentMode:(long long)arg1;
- (void)setConstraintPriority:(float)arg1;
- (void)updateWithProto;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (_Bool)isUserInteractionEnabled;
- (id)fullNetworkImage;
- (id)defaultImage;
- (struct CGSize)intrinsicContentSize;
- (void)setImageTintColor:(id)arg1 imageBackGroundColor:(id)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithProto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

