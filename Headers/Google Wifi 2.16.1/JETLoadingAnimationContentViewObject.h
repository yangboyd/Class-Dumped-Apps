//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOContentViewObject-Protocol.h"

@class JETLoadingAnimationContentView, NSString, UIColor;

@interface JETLoadingAnimationContentViewObject : NSObject <GOOContentViewObject>
{
    _Bool _loadingFailed;
    UIColor *_backgroundColor;
    double _contentHeight;
    JETLoadingAnimationContentView *_contentView;
}

@property(nonatomic) __weak JETLoadingAnimationContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) _Bool loadingFailed; // @synthesize loadingFailed=_loadingFailed;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)dealloc;
- (Class)contentViewClass;
- (id)init;
- (id)initWithContentHeight:(double)arg1 backgroundColor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long elementKind;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

