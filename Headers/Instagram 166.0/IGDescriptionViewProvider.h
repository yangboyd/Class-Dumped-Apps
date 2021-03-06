//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListItemViewProvider-Protocol.h>

@class IGLabel, IGTableLayoutSpec, NSString;
@protocol IGListItemViewProviderDelegate;

@interface IGDescriptionViewProvider : NSObject <IGListItemViewProvider>
{
    IGTableLayoutSpec *_layoutSpec;
    IGLabel *_label;
    _Bool _selected;
    id <IGListItemViewProviderDelegate> _providerDelegate;
    struct UIEdgeInsets _leadingViewInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets; // @synthesize leadingViewInsets=_leadingViewInsets;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
- (long long)trailingViewSizing;
- (long long)trailingViewAlignment;
- (id)trailingContentView;
- (id)bodyContentView;
- (id)leadingContentView;
- (void)configureWithTitleText:(id)arg1 stringStyle:(id)arg2;
- (id)initWithLayoutSpec:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

