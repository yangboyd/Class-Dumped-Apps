//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSDictionary, NSString, SPTHubsKitComponentModel;

@interface SPTHubsKitViewModel : NSObject <NSCopying, NSMutableCopying>
{
    SPTHubsKitComponentModel *_header;
    NSArray *_body;
    NSArray *_overlay;
    NSDictionary *_customData;
    NSString *_navigationBarTitle;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(copy, nonatomic) NSArray *overlay; // @synthesize overlay=_overlay;
@property(copy, nonatomic) NSArray *body; // @synthesize body=_body;
@property(copy, nonatomic) SPTHubsKitComponentModel *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (_Bool)isEqualToViewModel:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 navigationBarTitle:(id)arg2 header:(id)arg3 body:(id)arg4 overlay:(id)arg5 customData:(id)arg6;

@end

