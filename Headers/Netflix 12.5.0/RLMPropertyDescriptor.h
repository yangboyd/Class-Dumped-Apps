//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RLMPropertyDescriptor : NSObject
{
    Class _objectClass;
    NSString *_propertyName;
}

+ (id)descriptorWithClass:(Class)arg1 propertyName:(id)arg2;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (void).cxx_destruct;

@end

