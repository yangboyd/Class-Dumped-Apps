//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSNumber, NSString;

@interface MPCart : NSObject <NSSecureCoding>
{
    _Bool _cartInitialized;
    NSString *_cartFile;
    NSMutableArray *_productsList;
    NSNumber *_mpid;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool cartInitialized; // @synthesize cartInitialized=_cartInitialized;
@property(readonly, nonatomic) NSNumber *mpid; // @synthesize mpid=_mpid;
@property(retain, nonatomic) NSMutableArray *productsList; // @synthesize productsList=_productsList;
- (void)removeProduct:(id)arg1;
- (id)products;
- (void)clear;
- (void)addAllProducts:(id)arg1 shouldLogEvents:(_Bool)arg2;
- (void)addProduct:(id)arg1;
- (_Bool)validateProducts:(id)arg1;
- (_Bool)validateProduct:(id)arg1;
- (void)removeProducts:(id)arg1 logEvent:(_Bool)arg2 updateProductList:(_Bool)arg3;
- (id)dictionaryRepresentation;
- (void)addProducts:(id)arg1 logEvent:(_Bool)arg2 updateProductList:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)retrieveCart;
- (void)removePersistedCart;
- (void)persistCart;
- (void)migrate;
@property(readonly, nonatomic) NSString *cartFile; // @synthesize cartFile=_cartFile;
- (id)initWithUserId:(id)arg1;

@end

