//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JWTAlgorithmDataHolderChain, NSNumber;

@interface JWTCodingBuilder : NSObject
{
    NSNumber *_internalOptions;
    JWTAlgorithmDataHolderChain *_internalChain;
    CDUnknownBlockType _chain;
    CDUnknownBlockType _constructChain;
    CDUnknownBlockType _modifyChain;
    CDUnknownBlockType _options;
    CDUnknownBlockType _addHolder;
    CDUnknownBlockType _constructHolder;
}

+ (id)createWithEmptyChain;
+ (id)createWithChain:(id)arg1;
+ (id)createWithHolders:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType constructHolder; // @synthesize constructHolder=_constructHolder;
@property(copy, nonatomic) CDUnknownBlockType addHolder; // @synthesize addHolder=_addHolder;
@property(copy, nonatomic) CDUnknownBlockType options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType modifyChain; // @synthesize modifyChain=_modifyChain;
@property(copy, nonatomic) CDUnknownBlockType constructChain; // @synthesize constructChain=_constructChain;
@property(copy, nonatomic) CDUnknownBlockType chain; // @synthesize chain=_chain;
@property(retain, nonatomic) JWTAlgorithmDataHolderChain *internalChain; // @synthesize internalChain=_internalChain;
@property(copy, nonatomic) NSNumber *internalOptions; // @synthesize internalOptions=_internalOptions;
- (id)initWithChain:(id)arg1;
- (void)setupFluent;
- (id)addHolder:(id)arg1;
- (id)options:(id)arg1;
- (id)chain:(id)arg1;
- (id)with;
- (id)and;

@end

