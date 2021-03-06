//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class NSString;

@interface IGShoppingProductCatalogModel : NSObject <IGListDiffable>
{
    NSString *_catalogId;
    NSString *_name;
    unsigned long long _itemCount;
}

@property(readonly, nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *catalogId; // @synthesize catalogId=_catalogId;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

