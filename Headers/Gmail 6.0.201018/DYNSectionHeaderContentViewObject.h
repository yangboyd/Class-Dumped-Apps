//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

#import "DYNContentViewObject-Protocol.h"
#import "DYNSectionHeaderCellModel-Protocol.h"

@class NSString, UIColor;
@protocol DYNContentViewObjectActionDelegate, GILVisualElementParams;

@interface DYNSectionHeaderContentViewObject : GOOBaseContentViewObject <DYNContentViewObject, DYNSectionHeaderCellModel>
{
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)shouldShowInkView;
@property(readonly, nonatomic) Class collectionViewCellClass;
@property(readonly, nonatomic) NSString *reuseIdentifier;
@property(retain, nonatomic) Class contentViewClass;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 titleColor:(id)arg2;
- (id)initWithTitle:(id)arg1 titleColor:(id)arg2 backgroundColor:(id)arg3;

// Remaining properties
@property(nonatomic) __weak id <DYNContentViewObjectActionDelegate> actionDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) int visualElementID;
@property(retain, nonatomic) id <GILVisualElementParams> visualElementParams;

@end

