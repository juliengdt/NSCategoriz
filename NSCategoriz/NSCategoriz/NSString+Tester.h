//
//  NSString+Tester.h
//  NSCategoriz
//
//  Created by Julien Gdt on 21/05/2014.
//  Copyright (c) 2014 awl. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Tester)


/**
 *  Test if self string is equal to a given int
 *
 *  @param integer the int to test
 *
 *  @return YES if self string is equal to the Int
 *
 *  @warning careful with arm64, just saying. This have to be tested
 */
- (BOOL) isEqualToInt:(int)aInteger;

/**
 *  Test if self string is equal to a given double
 *
 *  @param aDouble the double to test
 *
 *  @return YES if self string is equal to the Double
 */
- (BOOL) isEqualToDouble:(double)aDouble;

/**
 *  Test if self string is equal to the given long
 *
 *  @param aLong the long to test
 *
 *  @return YES if self string is equal to the Long
 */
- (BOOL) isEqualToLong:(long)aLong;

/**
 *  Test if self string is equal to the given float
 *
 *  @param aFloat the float to test
 *
 *  @return YES if self string is equal to the Float
 */
- (BOOL) isEqualToFloat:(float)aFloat;

/**
 *  Test if self string is equal to a given NSInteger
 *
 *  @param nsInteger the NSInteger to test
 *
 *  @return YES if self string is equal to the NSInteger
 */
- (BOOL) isEqualToInteger:(NSInteger)aNSInteger;

/**
 *  Test if self string is equal to a given NSNumber
 *
 *  @param aNSNumber the NSNumber to test
 *
 *  @return YES if self string is equal to the NSNumber
 */
- (BOOL) isEqualToNumber:(NSNumber*)aNSNumber;

/**
 *  Test if self string is equal to a given B64 NSString
 *
 *  @param string the B64 encoded NSString
 *
 *  @return YES if self string is equal to the NSString
 */
- (BOOL) isEqualToB64String:(NSString*)aNSString;

/**
 *  Test if self string is equal to a NSData
 *
 *  @param data the NSData to test
 *
 *  @return YES if self string is equal to the NSData
 */
- (BOOL) isEqualToData:(NSData*)aNSData;

/**
 *  Test if self string is equal to B64 NSdata
 *
 *  @param b64Data the B64 encoded NSData
 *
 *  @return YES if self string is equal to the NSData
 */
- (BOOL) isEqualToB64Data:(NSData*)ab64NSData;

/**
 *  Test if self string is equal to a givent NSDate
 *
 *  @param aDate            the NSDate to test
 *  @param aNSDateFormatter the formatter of self NSString
 *
 *  @return YES if self string is equal to the NSDate
 */
- (BOOL) isEqualToDate:(NSDate*)aDate WithFormatter:(NSDateFormatter*)aNSDateFormatter;




@end
