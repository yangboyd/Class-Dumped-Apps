//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufAbstractMessage.h"

@interface ComGoogleProtobufGeneratedMessage : ComGoogleProtobufAbstractMessage
{
    int memoizedSize_;
    int memoizedHash_;
}

+ (_Bool)resolveClassMethod:(SEL)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)parseDelimitedFromWithJavaIoInputStream:(id)arg1 withComGoogleProtobufExtensionRegistryLite:(id)arg2;
+ (id)parseDelimitedFromWithJavaIoInputStream:(id)arg1;
+ (id)parseFromWithJavaIoInputStream:(id)arg1 withComGoogleProtobufExtensionRegistryLite:(id)arg2;
+ (id)parseFromWithJavaIoInputStream:(id)arg1;
+ (id)parseFromNSData:(id)arg1 registry:(id)arg2;
+ (id)parseFromNSData:(id)arg1;
+ (id)parseFromWithByteArray:(id)arg1 withComGoogleProtobufExtensionRegistryLite:(id)arg2;
+ (id)parseFromWithByteArray:(id)arg1;
+ (id)getDefaultInstance;
+ (id)newBuilder;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getAllFields;
- (id)getRepeatedFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1 withInt:(int)arg2;
- (int)getRepeatedFieldCountWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1;
- (_Bool)hasFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1;
- (id)getFieldWithComGoogleProtobufDescriptors_FieldDescriptor:(id)arg1;
- (id)getDescriptorForType;
- (void)writeDelimitedToWithJavaIoOutputStream:(id)arg1;
- (void)writeToWithJavaIoOutputStream:(id)arg1;
- (id)toNSData;
- (id)toByteString;
- (id)toByteArray;
- (int)getSerializedSize;
- (id)getDefaultInstanceForType;
- (id)toBuilder;
- (id)newBuilderForType;

@end

