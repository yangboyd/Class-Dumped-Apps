//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WABloksKit/CKIterable-Protocol.h>

@class NSString, UIView;
@protocol CKMountable, NSObject;

@protocol CKMountable <CKIterable>
@property(readonly, copy, nonatomic) NSString *className;
@property(readonly, nonatomic) id <NSObject> uniqueIdentifier;
@property(readonly, nonatomic) struct CKMountInfo mountInfo;
@property(readonly, nonatomic) UIView *mountedView;
- (void)childrenDidMount;
- (void)unmount;
- (struct MountResult)mountInContext:(const struct MountContext *)arg1 layout:(const struct CKLayout *)arg2 supercomponent:(id <CKMountable>)arg3;
- (struct CKComponentViewContext)viewContext;
- (struct CKLayout)layoutThatFits:(struct CKSizeRange)arg1 parentSize:(struct CGSize)arg2;
@end

