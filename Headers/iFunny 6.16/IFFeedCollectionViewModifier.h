//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/TRCollectionViewModifier.h>

@class NSObject;
@protocol IFFeedCollectionViewModifierDelegate;

@interface IFFeedCollectionViewModifier : TRCollectionViewModifier
{
}

- (void)modifyAnimatedWithUpdateBlock:(CDUnknownBlockType)arg1 deleteBlock:(CDUnknownBlockType)arg2 insertBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(nonatomic) __weak NSObject<IFFeedCollectionViewModifierDelegate> *delegate; // @dynamic delegate;

@end

