//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/NSCopying-Protocol.h>

@class GPBEnumDescriptor, NSString;

@interface GPBExtensionDescriptor : NSObject <NSCopying>
{
    struct GPBExtensionDescription {
        CDUnion_cf1021d0;
        char *;
        CDUnion_55fa2897;
        union {
            char *_field1;
            CDUnion_55fa2897 _field2;
        };
        CDUnknownFunctionPointerType;
        int;
        unsigned char;
        unsigned char;
    } *description_;
    CDUnion_88782d86 defaultValue_;
}

- (long long)compareByFieldNumber:(id)arg1;
@property(readonly, nonatomic) id defaultValue;
@property(readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
@property(readonly, nonatomic) Class containingMessageClass;
@property(readonly, nonatomic) Class msgClass;
@property(readonly, nonatomic, getter=isPackable) _Bool packable;
@property(readonly, nonatomic, getter=isRepeated) _Bool repeated;
@property(readonly, nonatomic) int alternateWireType;
@property(readonly, nonatomic) int wireType;
@property(readonly, nonatomic) unsigned char dataType;
@property(readonly, nonatomic) unsigned int fieldNumber;
- (const char *)singletonNameC;
@property(readonly, nonatomic) NSString *singletonName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithExtensionDescription:(GPBExtensionDescription_bfb83cd3 *)arg1;
- (id)initWithExtensionDescription:(GPBExtensionDescription_bfb83cd3 *)arg1 usesClassRefs:(_Bool)arg2;

@end

