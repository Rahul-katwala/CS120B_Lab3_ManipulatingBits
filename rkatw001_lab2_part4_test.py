tests = [ {'description': 'PINA:  0x00',
    'steps': [ {'inputs': [('PINA',0x00)], 'iterations': 1 } ],
    'expected': [('PORTC',0x00), ('PORTB', 0x00)],
    },

 {'description': 'PINA: 0XFF',
    'steps': [ {'inputs': [('PINA',0xFF)], 'iterations': 1 } ],
    'expected': [('PORTB',0x0F), ('PORTC', 0xF0)],
    },

 {'description': 'PINA = 0x35',
    'steps': [ {'inputs': [('PINA',0x35)], 'iterations': 1 } ],
    'expected': [('PORTC',0x50), ('PORTB', 0x03)],
    },

 {'description': 'PINA = 0x3A',
    'steps': [ {'inputs': [('PINA',0x3A)], 'iterations': 1 } ],
    'expected': [('PORTC',0xA0), ('PORTB', 0x03)],
    },



#    {'description': 'This test will run second.',
 #   'steps': [ {'inputs': [('PIN', <val>)],'iterations': 1}, # Set PIN to val then run one iteration
  #      {'inputs': [('PIN',<val>)], 'time': 300 }, # Set PIN to val then run 300 ms
   #     {'inputs': [('PIN',<val>)], 'iterations': 1, 'expected': [('PORT',<val>)]}, 
    #    {'inputs': [('PIN',<val>)], 'time': 600}, ],
   # 'expected': [('PORT',<val>)],
  #  },
    ]
