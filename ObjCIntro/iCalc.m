#import <Foundation/Foundation.h>

@interface ICalc : NSObject
{
    int leftOp;
    int rightOp;
}

-(void) setLeftOp: (int)nLeftOp;
-(void) setRighttOp: (int)nRightOp;

@end