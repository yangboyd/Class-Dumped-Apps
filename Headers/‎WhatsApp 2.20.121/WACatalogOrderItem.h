//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString, NSURL;

@interface WACatalogOrderItem : NSObject
{
    // Error parsing type: , name: id
    // Error parsing type: , name: name
    // Error parsing type: , name: price
    // Error parsing type: , name: currencyCode
    // Error parsing type: , name: $__lazy_storage_$_localizedPrice
    // Error parsing type: , name: thumbnailID
    // Error parsing type: , name: thumbnailURL
    // Error parsing type: , name: quantity
    // Error parsing type: , name: status
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithId:(id)arg1 name:(id)arg2 price:(id)arg3 currencyCode:(id)arg4 thumbnailID:(id)arg5 thumbnailURL:(id)arg6 quantity:(long long)arg7 status:(long long)arg8;
- (id)initWithProduct:(id)arg1 quantity:(long long)arg2;
@property(nonatomic, readonly) long long status; // @synthesize status;
@property(nonatomic, readonly) long long quantity; // @synthesize quantity;
@property(nonatomic, readonly) NSURL *thumbnailURL;
@property(nonatomic, readonly) NSString *thumbnailID;
@property(nonatomic, copy) NSString *localizedPrice;
@property(nonatomic, readonly) NSString *currencyCode;
@property(nonatomic, readonly) NSDecimalNumber *price; // @synthesize price;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *id;

@end

