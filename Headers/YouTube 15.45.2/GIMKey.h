//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class Protocol;

@interface GIMKey : NSObject <NSCopying>
{
    unsigned long long _hash;
    long long _bindingType;
    id _fromType;
    id _type;
    Protocol *_label;
}

+ (id)descriptionOfType:(id)arg1;
+ (id)keyForDictionaryFromType:(id)arg1 toType:(id)arg2 label:(id)arg3;
+ (id)keyForDictionaryFromType:(id)arg1 toType:(id)arg2;
+ (id)keyForArrayOfType:(id)arg1 label:(id)arg2;
+ (id)keyForArrayOfType:(id)arg1;
+ (id)keyForType:(id)arg1 label:(id)arg2;
+ (id)keyForType:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) Protocol *label; // @synthesize label=_label;
@property(readonly, nonatomic) id type; // @synthesize type=_type;
@property(readonly, nonatomic) id fromType; // @synthesize fromType=_fromType;
@property(readonly, nonatomic) long long bindingType; // @synthesize bindingType=_bindingType;
- (id)labelDescription;
- (id)typeDescription;
- (id)fromTypeDescription;
- (id)bindingTypeDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBindingType:(long long)arg1 fromType:(id)arg2 type:(id)arg3 label:(id)arg4;

@end

