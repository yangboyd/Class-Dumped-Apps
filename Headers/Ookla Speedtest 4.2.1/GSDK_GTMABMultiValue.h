//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/NSCopying-Protocol.h>
#import <SpeedTestEngine/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GSDK_GTMABMultiValue : NSObject <NSCopying, NSMutableCopying>
{
    void *multiValue_;
}

- (id)labelEnumerator;
- (id)valueEnumerator;
- (unsigned long long *)mutations;
- (id)labelForIdentifier:(int)arg1;
- (id)valueForIdentifier:(int)arg1;
- (unsigned int)propertyType;
- (unsigned long long)indexForIdentifier:(int)arg1;
- (int)identifierAtIndex:(unsigned long long)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void *)multiValueRef;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMultiValue:(void *)arg1;
- (id)init;

@end

