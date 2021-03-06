//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@protocol AFURLResponseSerialization;

@interface UIButton (AFNetworking)
+ (void)setSharedImageCache:(id)arg1;
+ (id)sharedImageCache;
- (void)cancelBackgroundImageRequestOperationForState:(unsigned long long)arg1;
- (void)cancelImageRequestOperationForState:(unsigned long long)arg1;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2;
- (void)setImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2;
@property(retain, nonatomic) id <AFURLResponseSerialization> imageResponseSerializer;
@end

