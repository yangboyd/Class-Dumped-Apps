//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DeNAWPJSONUtil : NSObject
{
}

+ (id)getArrayFromJSON:(id)arg1 withKey:(id)arg2;
+ (id)getJSONFromJSON:(id)arg1 withKey:(id)arg2;
+ (id)getStringFromJSON:(id)arg1 withKey:(id)arg2;
+ (_Bool)getBOOLFromFJSON:(id)arg1 withKey:(id)arg2 withDefValue:(_Bool)arg3;
+ (float)getFloatFromJSON:(id)arg1 withKey:(id)arg2 withDefValue:(float)arg3;
+ (int)getIntFromJSON:(id)arg1 withKey:(id)arg2 withDefValue:(int)arg3;
+ (id)parseStringFromJSON:(id)arg1;
+ (id)parseJSONFromString:(id)arg1;

@end

